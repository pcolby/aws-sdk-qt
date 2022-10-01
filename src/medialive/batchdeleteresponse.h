// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETERESPONSE_H
#define QTAWS_BATCHDELETERESPONSE_H

#include "medialiveresponse.h"
#include "batchdeleterequest.h"

namespace QtAws {
namespace MediaLive {

class BatchDeleteResponsePrivate;

class QTAWSMEDIALIVE_EXPORT BatchDeleteResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    BatchDeleteResponse(const BatchDeleteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteResponse)
    Q_DISABLE_COPY(BatchDeleteResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
