// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISRESPONSE_H
#define QTAWS_KINESISRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskinesisglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Kinesis {

class KinesisResponsePrivate;

class QTAWSKINESIS_EXPORT KinesisResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KinesisResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KinesisResponse(KinesisResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisResponse)
    Q_DISABLE_COPY(KinesisResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
