// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKACONNECTRESPONSE_H
#define QTAWS_KAFKACONNECTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskafkaconnectglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace KafkaConnect {

class KafkaConnectResponsePrivate;

class QTAWSKAFKACONNECT_EXPORT KafkaConnectResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KafkaConnectResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KafkaConnectResponse(KafkaConnectResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KafkaConnectResponse)
    Q_DISABLE_COPY(KafkaConnectResponse)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
