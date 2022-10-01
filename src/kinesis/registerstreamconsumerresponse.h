// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSTREAMCONSUMERRESPONSE_H
#define QTAWS_REGISTERSTREAMCONSUMERRESPONSE_H

#include "kinesisresponse.h"
#include "registerstreamconsumerrequest.h"

namespace QtAws {
namespace Kinesis {

class RegisterStreamConsumerResponsePrivate;

class QTAWSKINESIS_EXPORT RegisterStreamConsumerResponse : public KinesisResponse {
    Q_OBJECT

public:
    RegisterStreamConsumerResponse(const RegisterStreamConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterStreamConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterStreamConsumerResponse)
    Q_DISABLE_COPY(RegisterStreamConsumerResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
