// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTORRESPONSE_H
#define QTAWS_INSPECTORRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsinspectorglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Inspector {

class InspectorResponsePrivate;

class QTAWSINSPECTOR_EXPORT InspectorResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    InspectorResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    InspectorResponse(InspectorResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InspectorResponse)
    Q_DISABLE_COPY(InspectorResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
