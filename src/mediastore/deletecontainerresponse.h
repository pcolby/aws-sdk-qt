// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERRESPONSE_H
#define QTAWS_DELETECONTAINERRESPONSE_H

#include "mediastoreresponse.h"
#include "deletecontainerrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerResponsePrivate;

class QTAWSMEDIASTORE_EXPORT DeleteContainerResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    DeleteContainerResponse(const DeleteContainerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContainerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerResponse)
    Q_DISABLE_COPY(DeleteContainerResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
