// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCERESPONSE_P_H
#define QTAWS_ADDTAGSTORESOURCERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class AddTagsToResourceResponse;

class AddTagsToResourceResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit AddTagsToResourceResponsePrivate(AddTagsToResourceResponse * const q);

    void parseAddTagsToResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddTagsToResourceResponse)
    Q_DISABLE_COPY(AddTagsToResourceResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
