// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMTEMPLATESREQUEST_H
#define QTAWS_SEARCHSYSTEMTEMPLATESREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemTemplatesRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchSystemTemplatesRequest : public IoTThingsGraphRequest {

public:
    SearchSystemTemplatesRequest(const SearchSystemTemplatesRequest &other);
    SearchSystemTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSystemTemplatesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
