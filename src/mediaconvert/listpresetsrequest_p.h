// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSREQUEST_P_H
#define QTAWS_LISTPRESETSREQUEST_P_H

#include "mediaconvertrequest_p.h"
#include "listpresetsrequest.h"

namespace QtAws {
namespace MediaConvert {

class ListPresetsRequest;

class ListPresetsRequestPrivate : public MediaConvertRequestPrivate {

public:
    ListPresetsRequestPrivate(const MediaConvertRequest::Action action,
                                   ListPresetsRequest * const q);
    ListPresetsRequestPrivate(const ListPresetsRequestPrivate &other,
                                   ListPresetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPresetsRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
