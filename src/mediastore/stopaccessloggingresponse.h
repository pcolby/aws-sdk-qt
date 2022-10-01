// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACCESSLOGGINGRESPONSE_H
#define QTAWS_STOPACCESSLOGGINGRESPONSE_H

#include "mediastoreresponse.h"
#include "stopaccessloggingrequest.h"

namespace QtAws {
namespace MediaStore {

class StopAccessLoggingResponsePrivate;

class QTAWSMEDIASTORE_EXPORT StopAccessLoggingResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    StopAccessLoggingResponse(const StopAccessLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopAccessLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAccessLoggingResponse)
    Q_DISABLE_COPY(StopAccessLoggingResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
