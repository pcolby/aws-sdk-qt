/*
    Copyright 2013-2020 Paul Colby

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

#include "removepermissionresponse.h"
#include "removepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::RemovePermissionResponse
 * \brief The RemovePermissionResponse class provides an interace for Lambda RemovePermission responses.
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
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::removePermission
 */

/*!
 * Constructs a RemovePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
RemovePermissionResponse::RemovePermissionResponse(
        const RemovePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new RemovePermissionResponsePrivate(this), parent)
{
    setRequest(new RemovePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemovePermissionRequest * RemovePermissionResponse::request() const
{
    Q_D(const RemovePermissionResponse);
    return static_cast<const RemovePermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda RemovePermission \a response.
 */
void RemovePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemovePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::RemovePermissionResponsePrivate
 * \brief The RemovePermissionResponsePrivate class provides private implementation for RemovePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a RemovePermissionResponsePrivate object with public implementation \a q.
 */
RemovePermissionResponsePrivate::RemovePermissionResponsePrivate(
    RemovePermissionResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda RemovePermission response element from \a xml.
 */
void RemovePermissionResponsePrivate::parseRemovePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemovePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
