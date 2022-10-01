// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERRESPONSE_P_H
#define QTAWS_DESCRIBECONTAINERRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class DescribeContainerResponse;

class DescribeContainerResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit DescribeContainerResponsePrivate(DescribeContainerResponse * const q);

    void parseDescribeContainerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContainerResponse)
    Q_DISABLE_COPY(DescribeContainerResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
