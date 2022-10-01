// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOICEIDRESPONSE_H
#define QTAWS_VOICEIDRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsvoiceidglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace VoiceId {

class VoiceIdResponsePrivate;

class QTAWSVOICEID_EXPORT VoiceIdResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    VoiceIdResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    VoiceIdResponse(VoiceIdResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VoiceIdResponse)
    Q_DISABLE_COPY(VoiceIdResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
