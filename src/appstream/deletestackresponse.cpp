// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestackresponse.h"
#include "deletestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DeleteStackResponse
 * \brief The DeleteStackResponse class provides an interace for AppStream DeleteStack responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::deleteStack
 */

/*!
 * Constructs a DeleteStackResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStackResponse::DeleteStackResponse(
        const DeleteStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new DeleteStackResponsePrivate(this), parent)
{
    setRequest(new DeleteStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStackRequest * DeleteStackResponse::request() const
{
    Q_D(const DeleteStackResponse);
    return static_cast<const DeleteStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream DeleteStack \a response.
 */
void DeleteStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::DeleteStackResponsePrivate
 * \brief The DeleteStackResponsePrivate class provides private implementation for DeleteStackResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a DeleteStackResponsePrivate object with public implementation \a q.
 */
DeleteStackResponsePrivate::DeleteStackResponsePrivate(
    DeleteStackResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream DeleteStack response element from \a xml.
 */
void DeleteStackResponsePrivate::parseDeleteStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
