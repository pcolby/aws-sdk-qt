// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMTEMPLATESREQUEST_P_H
#define QTAWS_SEARCHSYSTEMTEMPLATESREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "searchsystemtemplatesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemTemplatesRequest;

class SearchSystemTemplatesRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    SearchSystemTemplatesRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   SearchSystemTemplatesRequest * const q);
    SearchSystemTemplatesRequestPrivate(const SearchSystemTemplatesRequestPrivate &other,
                                   SearchSystemTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchSystemTemplatesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
