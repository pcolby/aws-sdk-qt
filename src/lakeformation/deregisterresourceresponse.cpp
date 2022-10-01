// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterresourceresponse.h"
#include "deregisterresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeregisterResourceResponse
 * \brief The DeregisterResourceResponse class provides an interace for LakeFormation DeregisterResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deregisterResource
 */

/*!
 * Constructs a DeregisterResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterResourceResponse::DeregisterResourceResponse(
        const DeregisterResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeregisterResourceResponsePrivate(this), parent)
{
    setRequest(new DeregisterResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterResourceRequest * DeregisterResourceResponse::request() const
{
    Q_D(const DeregisterResourceResponse);
    return static_cast<const DeregisterResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeregisterResource \a response.
 */
void DeregisterResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeregisterResourceResponsePrivate
 * \brief The DeregisterResourceResponsePrivate class provides private implementation for DeregisterResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeregisterResourceResponsePrivate object with public implementation \a q.
 */
DeregisterResourceResponsePrivate::DeregisterResourceResponsePrivate(
    DeregisterResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeregisterResource response element from \a xml.
 */
void DeregisterResourceResponsePrivate::parseDeregisterResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
