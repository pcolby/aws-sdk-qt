// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSTREAMRESPONSE_H
#define QTAWS_APPSTREAMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappstreamglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppStream {

class AppStreamResponsePrivate;

class QTAWSAPPSTREAM_EXPORT AppStreamResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppStreamResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppStreamResponse(AppStreamResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppStreamResponse)
    Q_DISABLE_COPY(AppStreamResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
