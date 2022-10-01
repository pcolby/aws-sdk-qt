// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECORDSRESPONSE_H
#define QTAWS_UPDATERECORDSRESPONSE_H

#include "cognitosyncresponse.h"
#include "updaterecordsrequest.h"

namespace QtAws {
namespace CognitoSync {

class UpdateRecordsResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT UpdateRecordsResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    UpdateRecordsResponse(const UpdateRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecordsResponse)
    Q_DISABLE_COPY(UpdateRecordsResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
