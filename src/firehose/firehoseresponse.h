// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FIREHOSERESPONSE_H
#define QTAWS_FIREHOSERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfirehoseglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Firehose {

class FirehoseResponsePrivate;

class QTAWSFIREHOSE_EXPORT FirehoseResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FirehoseResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FirehoseResponse(FirehoseResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FirehoseResponse)
    Q_DISABLE_COPY(FirehoseResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
