/*
    Copyright 2013-2018 Paul Colby

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

#include "removelayerversionpermissionresponse.h"
#include "removelayerversionpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::RemoveLayerVersionPermissionResponse
 * \brief The RemoveLayerVersionPermissionResponse class provides an interace for Lambda RemoveLayerVersionPermission responses.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::removeLayerVersionPermission
 */

/*!
 * Constructs a RemoveLayerVersionPermissionResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveLayerVersionPermissionResponse::RemoveLayerVersionPermissionResponse(
        const RemoveLayerVersionPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new RemoveLayerVersionPermissionResponsePrivate(this), parent)
{
    setRequest(new RemoveLayerVersionPermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveLayerVersionPermissionRequest * RemoveLayerVersionPermissionResponse::request() const
{
    Q_D(const RemoveLayerVersionPermissionResponse);
    return static_cast<const RemoveLayerVersionPermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda RemoveLayerVersionPermission \a response.
 */
void RemoveLayerVersionPermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveLayerVersionPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::RemoveLayerVersionPermissionResponsePrivate
 * \brief The RemoveLayerVersionPermissionResponsePrivate class provides private implementation for RemoveLayerVersionPermissionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a RemoveLayerVersionPermissionResponsePrivate object with public implementation \a q.
 */
RemoveLayerVersionPermissionResponsePrivate::RemoveLayerVersionPermissionResponsePrivate(
    RemoveLayerVersionPermissionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda RemoveLayerVersionPermission response element from \a xml.
 */
void RemoveLayerVersionPermissionResponsePrivate::parseRemoveLayerVersionPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveLayerVersionPermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
