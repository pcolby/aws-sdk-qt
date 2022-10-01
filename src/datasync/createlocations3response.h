// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONS3RESPONSE_H
#define QTAWS_CREATELOCATIONS3RESPONSE_H

#include "datasyncresponse.h"
#include "createlocations3request.h"

namespace QtAws {
namespace DataSync {

class CreateLocationS3ResponsePrivate;

class QTAWSDATASYNC_EXPORT CreateLocationS3Response : public DataSyncResponse {
    Q_OBJECT

public:
    CreateLocationS3Response(const CreateLocationS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLocationS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationS3Response)
    Q_DISABLE_COPY(CreateLocationS3Response)

};

} // namespace DataSync
} // namespace QtAws

#endif
