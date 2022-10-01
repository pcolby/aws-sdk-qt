// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDDIRECTORYRESPONSE_P_H
#define QTAWS_CLOUDDIRECTORYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryResponse;

class CloudDirectoryResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudDirectoryResponsePrivate(CloudDirectoryResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudDirectoryResponse)
    Q_DISABLE_COPY(CloudDirectoryResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
