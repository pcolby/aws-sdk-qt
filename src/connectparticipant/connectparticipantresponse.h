// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTPARTICIPANTRESPONSE_H
#define QTAWS_CONNECTPARTICIPANTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsconnectparticipantglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ConnectParticipant {

class ConnectParticipantResponsePrivate;

class QTAWSCONNECTPARTICIPANT_EXPORT ConnectParticipantResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ConnectParticipantResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ConnectParticipantResponse(ConnectParticipantResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectParticipantResponse)
    Q_DISABLE_COPY(ConnectParticipantResponse)

};

} // namespace ConnectParticipant
} // namespace QtAws

#endif
