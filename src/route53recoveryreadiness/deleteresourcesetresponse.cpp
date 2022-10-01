// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcesetresponse.h"
#include "deleteresourcesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetResponse
 * \brief The DeleteResourceSetResponse class provides an interace for Route53RecoveryReadiness DeleteResourceSet responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::deleteResourceSet
 */

/*!
 * Constructs a DeleteResourceSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceSetResponse::DeleteResourceSetResponse(
        const DeleteResourceSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new DeleteResourceSetResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceSetRequest * DeleteResourceSetResponse::request() const
{
    Q_D(const DeleteResourceSetResponse);
    return static_cast<const DeleteResourceSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness DeleteResourceSet \a response.
 */
void DeleteResourceSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::DeleteResourceSetResponsePrivate
 * \brief The DeleteResourceSetResponsePrivate class provides private implementation for DeleteResourceSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a DeleteResourceSetResponsePrivate object with public implementation \a q.
 */
DeleteResourceSetResponsePrivate::DeleteResourceSetResponsePrivate(
    DeleteResourceSetResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness DeleteResourceSet response element from \a xml.
 */
void DeleteResourceSetResponsePrivate::parseDeleteResourceSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
