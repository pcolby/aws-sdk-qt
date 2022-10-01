// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MQRESPONSE_H
#define QTAWS_MQRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmqglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Mq {

class MqResponsePrivate;

class QTAWSMQ_EXPORT MqResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MqResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MqResponse(MqResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MqResponse)
    Q_DISABLE_COPY(MqResponse)

};

} // namespace Mq
} // namespace QtAws

#endif
