// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcesetresponse.h"
#include "createresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetResponse
 * \brief The CreateResourceSetResponse class provides an interace for Route53RecoveryReadiness CreateResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::createResourceSet
 */

/*!
 * Constructs a CreateResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceSetResponse::CreateResourceSetResponse(
        const CreateResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new CreateResourceSetResponsePrivate(this), parent)
{
    setRequest(new CreateResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceSetRequest * CreateResourceSetResponse::request() const
{
    Q_D(const CreateResourceSetResponse);
    return static_cast<const CreateResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness CreateResourceSet \a response.
 */
void CreateResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::CreateResourceSetResponsePrivate
 * \brief The CreateResourceSetResponsePrivate class provides private implementation for CreateResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a CreateResourceSetResponsePrivate object with public implementation \a q.
 */
CreateResourceSetResponsePrivate::CreateResourceSetResponsePrivate(
    CreateResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness CreateResourceSet response element from \a xml.
 */
void CreateResourceSetResponsePrivate::parseCreateResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
