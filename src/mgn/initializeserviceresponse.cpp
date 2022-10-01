// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initializeserviceresponse.h"
#include "initializeserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::InitializeServiceResponse
 * \brief The InitializeServiceResponse class provides an interace for Mgn InitializeService responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::initializeService
 */

/*!
 * Constructs a InitializeServiceResponse object for \a reply to \a request, with parent \a parent.
 */
InitializeServiceResponse::InitializeServiceResponse(
        const InitializeServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new InitializeServiceResponsePrivate(this), parent)
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
 * Parses a successful Mgn InitializeService \a response.
 */
void InitializeServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitializeServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::InitializeServiceResponsePrivate
 * \brief The InitializeServiceResponsePrivate class provides private implementation for InitializeServiceResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a InitializeServiceResponsePrivate object with public implementation \a q.
 */
InitializeServiceResponsePrivate::InitializeServiceResponsePrivate(
    InitializeServiceResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn InitializeService response element from \a xml.
 */
void InitializeServiceResponsePrivate::parseInitializeServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitializeServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
