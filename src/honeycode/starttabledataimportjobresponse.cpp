// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttabledataimportjobresponse.h"
#include "starttabledataimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobResponse
 * \brief The StartTableDataImportJobResponse class provides an interace for Honeycode StartTableDataImportJob responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::startTableDataImportJob
 */

/*!
 * Constructs a StartTableDataImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartTableDataImportJobResponse::StartTableDataImportJobResponse(
        const StartTableDataImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new StartTableDataImportJobResponsePrivate(this), parent)
{
    setRequest(new StartTableDataImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTableDataImportJobRequest * StartTableDataImportJobResponse::request() const
{
    Q_D(const StartTableDataImportJobResponse);
    return static_cast<const StartTableDataImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode StartTableDataImportJob \a response.
 */
void StartTableDataImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTableDataImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobResponsePrivate
 * \brief The StartTableDataImportJobResponsePrivate class provides private implementation for StartTableDataImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a StartTableDataImportJobResponsePrivate object with public implementation \a q.
 */
StartTableDataImportJobResponsePrivate::StartTableDataImportJobResponsePrivate(
    StartTableDataImportJobResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode StartTableDataImportJob response element from \a xml.
 */
void StartTableDataImportJobResponsePrivate::parseStartTableDataImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTableDataImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
