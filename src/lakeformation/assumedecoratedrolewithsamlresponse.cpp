// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "assumedecoratedrolewithsamlresponse.h"
#include "assumedecoratedrolewithsamlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::AssumeDecoratedRoleWithSAMLResponse
 * \brief The AssumeDecoratedRoleWithSAMLResponse class provides an interace for LakeFormation AssumeDecoratedRoleWithSAML responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::assumeDecoratedRoleWithSAML
 */

/*!
 * Constructs a AssumeDecoratedRoleWithSAMLResponse object for \a reply to \a request, with parent \a parent.
 */
AssumeDecoratedRoleWithSAMLResponse::AssumeDecoratedRoleWithSAMLResponse(
        const AssumeDecoratedRoleWithSAMLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new AssumeDecoratedRoleWithSAMLResponsePrivate(this), parent)
{
    setRequest(new AssumeDecoratedRoleWithSAMLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssumeDecoratedRoleWithSAMLRequest * AssumeDecoratedRoleWithSAMLResponse::request() const
{
    Q_D(const AssumeDecoratedRoleWithSAMLResponse);
    return static_cast<const AssumeDecoratedRoleWithSAMLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation AssumeDecoratedRoleWithSAML \a response.
 */
void AssumeDecoratedRoleWithSAMLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssumeDecoratedRoleWithSAMLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::AssumeDecoratedRoleWithSAMLResponsePrivate
 * \brief The AssumeDecoratedRoleWithSAMLResponsePrivate class provides private implementation for AssumeDecoratedRoleWithSAMLResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a AssumeDecoratedRoleWithSAMLResponsePrivate object with public implementation \a q.
 */
AssumeDecoratedRoleWithSAMLResponsePrivate::AssumeDecoratedRoleWithSAMLResponsePrivate(
    AssumeDecoratedRoleWithSAMLResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation AssumeDecoratedRoleWithSAML response element from \a xml.
 */
void AssumeDecoratedRoleWithSAMLResponsePrivate::parseAssumeDecoratedRoleWithSAMLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeDecoratedRoleWithSAMLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
