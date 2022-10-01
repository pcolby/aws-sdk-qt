/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associatealiasresponse.h"
#include "associatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::AssociateAliasResponse
 * \brief The AssociateAliasResponse class provides an interace for CloudFront AssociateAlias responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::associateAlias
 */

/*!
 * Constructs a AssociateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateAliasResponse::AssociateAliasResponse(
        const AssociateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new AssociateAliasResponsePrivate(this), parent)
{
    setRequest(new AssociateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateAliasRequest * AssociateAliasResponse::request() const
{
    Q_D(const AssociateAliasResponse);
    return static_cast<const AssociateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront AssociateAlias \a response.
 */
void AssociateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::AssociateAliasResponsePrivate
 * \brief The AssociateAliasResponsePrivate class provides private implementation for AssociateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a AssociateAliasResponsePrivate object with public implementation \a q.
 */
AssociateAliasResponsePrivate::AssociateAliasResponsePrivate(
    AssociateAliasResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront AssociateAlias response element from \a xml.
 */
void AssociateAliasResponsePrivate::parseAssociateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
