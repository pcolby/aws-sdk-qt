// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERSRESPONSE_H
#define QTAWS_LISTCONTAINERSRESPONSE_H

#include "mediastoreresponse.h"
#include "listcontainersrequest.h"

namespace QtAws {
namespace MediaStore {

class ListContainersResponsePrivate;

class QTAWSMEDIASTORE_EXPORT ListContainersResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    ListContainersResponse(const ListContainersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContainersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContainersResponse)
    Q_DISABLE_COPY(ListContainersResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
