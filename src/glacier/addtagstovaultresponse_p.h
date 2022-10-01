// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOVAULTRESPONSE_P_H
#define QTAWS_ADDTAGSTOVAULTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class AddTagsToVaultResponse;

class AddTagsToVaultResponsePrivate : public GlacierResponsePrivate {

public:

    explicit AddTagsToVaultResponsePrivate(AddTagsToVaultResponse * const q);

    void parseAddTagsToVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddTagsToVaultResponse)
    Q_DISABLE_COPY(AddTagsToVaultResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
