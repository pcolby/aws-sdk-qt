// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserresponse.h"
#include "describeuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeUserResponse
 * \brief The DescribeUserResponse class provides an interace for Mq DescribeUser responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeUser
 */

/*!
 * Constructs a DescribeUserResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserResponse::DescribeUserResponse(
        const DescribeUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeUserResponsePrivate(this), parent)
{
    setRequest(new DescribeUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserRequest * DescribeUserResponse::request() const
{
    Q_D(const DescribeUserResponse);
    return static_cast<const DescribeUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DescribeUser \a response.
 */
void DescribeUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeUserResponsePrivate
 * \brief The DescribeUserResponsePrivate class provides private implementation for DescribeUserResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeUserResponsePrivate object with public implementation \a q.
 */
DescribeUserResponsePrivate::DescribeUserResponsePrivate(
    DescribeUserResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeUser response element from \a xml.
 */
void DescribeUserResponsePrivate::parseDescribeUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
