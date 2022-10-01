// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrafficpolicyinstanceresponse.h"
#include "createtrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceResponse
 * \brief The CreateTrafficPolicyInstanceResponse class provides an interace for Route53 CreateTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createTrafficPolicyInstance
 */

/*!
 * Constructs a CreateTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTrafficPolicyInstanceResponse::CreateTrafficPolicyInstanceResponse(
        const CreateTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTrafficPolicyInstanceRequest * CreateTrafficPolicyInstanceResponse::request() const
{
    Q_D(const CreateTrafficPolicyInstanceResponse);
    return static_cast<const CreateTrafficPolicyInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateTrafficPolicyInstance \a response.
 */
void CreateTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceResponsePrivate
 * \brief The CreateTrafficPolicyInstanceResponsePrivate class provides private implementation for CreateTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
CreateTrafficPolicyInstanceResponsePrivate::CreateTrafficPolicyInstanceResponsePrivate(
    CreateTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateTrafficPolicyInstance response element from \a xml.
 */
void CreateTrafficPolicyInstanceResponsePrivate::parseCreateTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
