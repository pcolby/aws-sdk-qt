// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinputresponse.h"
#include "describeinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputResponse
 * \brief The DescribeInputResponse class provides an interace for MediaLive DescribeInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInput
 */

/*!
 * Constructs a DescribeInputResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInputResponse::DescribeInputResponse(
        const DescribeInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeInputResponsePrivate(this), parent)
{
    setRequest(new DescribeInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInputRequest * DescribeInputResponse::request() const
{
    Q_D(const DescribeInputResponse);
    return static_cast<const DescribeInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeInput \a response.
 */
void DescribeInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeInputResponsePrivate
 * \brief The DescribeInputResponsePrivate class provides private implementation for DescribeInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputResponsePrivate object with public implementation \a q.
 */
DescribeInputResponsePrivate::DescribeInputResponsePrivate(
    DescribeInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeInput response element from \a xml.
 */
void DescribeInputResponsePrivate::parseDescribeInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
