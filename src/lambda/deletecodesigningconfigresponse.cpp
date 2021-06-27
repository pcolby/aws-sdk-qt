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

#include "deletecodesigningconfigresponse.h"
#include "deletecodesigningconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::DeleteCodeSigningConfigResponse
 * \brief The DeleteCodeSigningConfigResponse class provides an interace for Lambda DeleteCodeSigningConfig responses.
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
 * \sa LambdaClient::deleteCodeSigningConfig
 */

/*!
 * Constructs a DeleteCodeSigningConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCodeSigningConfigResponse::DeleteCodeSigningConfigResponse(
        const DeleteCodeSigningConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteCodeSigningConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteCodeSigningConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCodeSigningConfigRequest * DeleteCodeSigningConfigResponse::request() const
{
    return static_cast<const DeleteCodeSigningConfigRequest *>(LambdaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Lambda DeleteCodeSigningConfig \a response.
 */
void DeleteCodeSigningConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCodeSigningConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::DeleteCodeSigningConfigResponsePrivate
 * \brief The DeleteCodeSigningConfigResponsePrivate class provides private implementation for DeleteCodeSigningConfigResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a DeleteCodeSigningConfigResponsePrivate object with public implementation \a q.
 */
DeleteCodeSigningConfigResponsePrivate::DeleteCodeSigningConfigResponsePrivate(
    DeleteCodeSigningConfigResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda DeleteCodeSigningConfig response element from \a xml.
 */
void DeleteCodeSigningConfigResponsePrivate::parseDeleteCodeSigningConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCodeSigningConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Lambda
} // namespace QtAws
