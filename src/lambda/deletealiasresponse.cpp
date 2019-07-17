/*
    Copyright 2013-2019 Paul Colby

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

#include "deletealiasresponse.h"
#include "deletealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteAliasResponse
 * \brief The DeleteAliasResponse class provides an interace for Lambda DeleteAlias responses.
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
 * \sa LambdaClient::deleteAlias
 */

/*!
 * Constructs a DeleteAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAliasResponse::DeleteAliasResponse(
        const DeleteAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAliasRequest * DeleteAliasResponse::request() const
{
    Q_D(const DeleteAliasResponse);
    return static_cast<const DeleteAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda DeleteAlias \a response.
 */
void DeleteAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::DeleteAliasResponsePrivate
 * \brief The DeleteAliasResponsePrivate class provides private implementation for DeleteAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteAliasResponsePrivate object with public implementation \a q.
 */
DeleteAliasResponsePrivate::DeleteAliasResponsePrivate(
    DeleteAliasResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda DeleteAlias response element from \a xml.
 */
void DeleteAliasResponsePrivate::parseDeleteAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
