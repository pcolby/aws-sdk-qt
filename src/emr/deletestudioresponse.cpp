// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudioresponse.h"
#include "deletestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteStudioResponse
 * \brief The DeleteStudioResponse class provides an interace for Emr DeleteStudio responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudio
 */

/*!
 * Constructs a DeleteStudioResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStudioResponse::DeleteStudioResponse(
        const DeleteStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DeleteStudioResponsePrivate(this), parent)
{
    setRequest(new DeleteStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStudioRequest * DeleteStudioResponse::request() const
{
    Q_D(const DeleteStudioResponse);
    return static_cast<const DeleteStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DeleteStudio \a response.
 */
void DeleteStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DeleteStudioResponsePrivate
 * \brief The DeleteStudioResponsePrivate class provides private implementation for DeleteStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteStudioResponsePrivate object with public implementation \a q.
 */
DeleteStudioResponsePrivate::DeleteStudioResponsePrivate(
    DeleteStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DeleteStudio response element from \a xml.
 */
void DeleteStudioResponsePrivate::parseDeleteStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
