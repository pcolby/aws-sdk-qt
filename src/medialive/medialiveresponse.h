// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIALIVERESPONSE_H
#define QTAWS_MEDIALIVERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmedialiveglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MediaLive {

class MediaLiveResponsePrivate;

class QTAWSMEDIALIVE_EXPORT MediaLiveResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MediaLiveResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MediaLiveResponse(MediaLiveResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaLiveResponse)
    Q_DISABLE_COPY(MediaLiveResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
