// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREDATARESPONSE_P_H
#define QTAWS_MEDIASTOREDATARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MediaStoreData {

class MediaStoreDataResponse;

class MediaStoreDataResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MediaStoreDataResponsePrivate(MediaStoreDataResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MediaStoreDataResponse)
    Q_DISABLE_COPY(MediaStoreDataResponsePrivate)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
