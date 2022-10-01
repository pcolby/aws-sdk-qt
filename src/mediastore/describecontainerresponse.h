// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERRESPONSE_H
#define QTAWS_DESCRIBECONTAINERRESPONSE_H

#include "mediastoreresponse.h"
#include "describecontainerrequest.h"

namespace QtAws {
namespace MediaStore {

class DescribeContainerResponsePrivate;

class QTAWSMEDIASTORE_EXPORT DescribeContainerResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    DescribeContainerResponse(const DescribeContainerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContainerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContainerResponse)
    Q_DISABLE_COPY(DescribeContainerResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
