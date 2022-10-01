// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORGROUPSREQUEST_H
#define QTAWS_LISTVOICECONNECTORGROUPSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorGroupsRequestPrivate;

class QTAWSCHIME_EXPORT ListVoiceConnectorGroupsRequest : public ChimeRequest {

public:
    ListVoiceConnectorGroupsRequest(const ListVoiceConnectorGroupsRequest &other);
    ListVoiceConnectorGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVoiceConnectorGroupsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
