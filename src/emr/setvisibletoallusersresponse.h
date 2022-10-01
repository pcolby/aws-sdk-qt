// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVISIBLETOALLUSERSRESPONSE_H
#define QTAWS_SETVISIBLETOALLUSERSRESPONSE_H

#include "emrresponse.h"
#include "setvisibletoallusersrequest.h"

namespace QtAws {
namespace Emr {

class SetVisibleToAllUsersResponsePrivate;

class QTAWSEMR_EXPORT SetVisibleToAllUsersResponse : public EmrResponse {
    Q_OBJECT

public:
    SetVisibleToAllUsersResponse(const SetVisibleToAllUsersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetVisibleToAllUsersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVisibleToAllUsersResponse)
    Q_DISABLE_COPY(SetVisibleToAllUsersResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
