// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTRESPONSE_H
#define QTAWS_DESCRIBEINPUTRESPONSE_H

#include "medialiveresponse.h"
#include "describeinputrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeInputResponse(const DescribeInputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputResponse)
    Q_DISABLE_COPY(DescribeInputResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
