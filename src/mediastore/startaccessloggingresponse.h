// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACCESSLOGGINGRESPONSE_H
#define QTAWS_STARTACCESSLOGGINGRESPONSE_H

#include "mediastoreresponse.h"
#include "startaccessloggingrequest.h"

namespace QtAws {
namespace MediaStore {

class StartAccessLoggingResponsePrivate;

class QTAWSMEDIASTORE_EXPORT StartAccessLoggingResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    StartAccessLoggingResponse(const StartAccessLoggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAccessLoggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAccessLoggingResponse)
    Q_DISABLE_COPY(StartAccessLoggingResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
