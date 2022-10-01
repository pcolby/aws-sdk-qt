// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERRESPONSE_H
#define QTAWS_CREATECONTAINERRESPONSE_H

#include "mediastoreresponse.h"
#include "createcontainerrequest.h"

namespace QtAws {
namespace MediaStore {

class CreateContainerResponsePrivate;

class QTAWSMEDIASTORE_EXPORT CreateContainerResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    CreateContainerResponse(const CreateContainerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContainerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerResponse)
    Q_DISABLE_COPY(CreateContainerResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
