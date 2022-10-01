// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTWINMAKERRESPONSE_H
#define QTAWS_IOTTWINMAKERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiottwinmakerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTTwinMaker {

class IoTTwinMakerResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT IoTTwinMakerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTTwinMakerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTTwinMakerResponse(IoTTwinMakerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTTwinMakerResponse)
    Q_DISABLE_COPY(IoTTwinMakerResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
