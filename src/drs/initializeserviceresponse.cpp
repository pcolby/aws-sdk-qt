// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initializeserviceresponse.h"
#include "initializeserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::InitializeServiceResponse
 * \brief The InitializeServiceResponse class provides an interace for Drs InitializeService responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::initializeService
 */

/*!
 * Constructs a InitializeServiceResponse object for \a reply to \a request, with parent \a parent.
 */
InitializeServiceResponse::InitializeServiceResponse(
        const InitializeServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new InitializeServiceResponsePrivate(this), parent)
{
    setRequest(new InitializeServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitializeServiceRequest * InitializeServiceResponse::request() const
{
    Q_D(const InitializeServiceResponse);
    return static_cast<const InitializeServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs InitializeService \a response.
 */
void InitializeServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitializeServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::InitializeServiceResponsePrivate
 * \brief The InitializeServiceResponsePrivate class provides private implementation for InitializeServiceResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a InitializeServiceResponsePrivate object with public implementation \a q.
 */
InitializeServiceResponsePrivate::InitializeServiceResponsePrivate(
    InitializeServiceResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs InitializeService response element from \a xml.
 */
void InitializeServiceResponsePrivate::parseInitializeServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitializeServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
