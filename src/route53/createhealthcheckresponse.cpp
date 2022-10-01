// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhealthcheckresponse.h"
#include "createhealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateHealthCheckResponse
 * \brief The CreateHealthCheckResponse class provides an interace for Route53 CreateHealthCheck responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createHealthCheck
 */

/*!
 * Constructs a CreateHealthCheckResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHealthCheckResponse::CreateHealthCheckResponse(
        const CreateHealthCheckRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateHealthCheckResponsePrivate(this), parent)
{
    setRequest(new CreateHealthCheckRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHealthCheckRequest * CreateHealthCheckResponse::request() const
{
    Q_D(const CreateHealthCheckResponse);
    return static_cast<const CreateHealthCheckRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateHealthCheck \a response.
 */
void CreateHealthCheckResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHealthCheckResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateHealthCheckResponsePrivate
 * \brief The CreateHealthCheckResponsePrivate class provides private implementation for CreateHealthCheckResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateHealthCheckResponsePrivate object with public implementation \a q.
 */
CreateHealthCheckResponsePrivate::CreateHealthCheckResponsePrivate(
    CreateHealthCheckResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateHealthCheck response element from \a xml.
 */
void CreateHealthCheckResponsePrivate::parseCreateHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHealthCheckResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
