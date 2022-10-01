// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTORERESPONSE_P_H
#define QTAWS_MEDIASTORERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaStore {

class MediaStoreResponse;

class MediaStoreResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaStoreResponsePrivate(MediaStoreResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaStoreResponse)
    Q_DISABLE_COPY(MediaStoreResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
