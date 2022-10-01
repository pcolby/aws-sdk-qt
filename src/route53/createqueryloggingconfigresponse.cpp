// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createqueryloggingconfigresponse.h"
#include "createqueryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigResponse
 * \brief The CreateQueryLoggingConfigResponse class provides an interace for Route53 CreateQueryLoggingConfig responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createQueryLoggingConfig
 */

/*!
 * Constructs a CreateQueryLoggingConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateQueryLoggingConfigResponse::CreateQueryLoggingConfigResponse(
        const CreateQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new CreateQueryLoggingConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateQueryLoggingConfigRequest * CreateQueryLoggingConfigResponse::request() const
{
    Q_D(const CreateQueryLoggingConfigResponse);
    return static_cast<const CreateQueryLoggingConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateQueryLoggingConfig \a response.
 */
void CreateQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateQueryLoggingConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigResponsePrivate
 * \brief The CreateQueryLoggingConfigResponsePrivate class provides private implementation for CreateQueryLoggingConfigResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateQueryLoggingConfigResponsePrivate object with public implementation \a q.
 */
CreateQueryLoggingConfigResponsePrivate::CreateQueryLoggingConfigResponsePrivate(
    CreateQueryLoggingConfigResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateQueryLoggingConfig response element from \a xml.
 */
void CreateQueryLoggingConfigResponsePrivate::parseCreateQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueryLoggingConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
