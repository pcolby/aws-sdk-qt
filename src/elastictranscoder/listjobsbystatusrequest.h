// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSBYSTATUSREQUEST_H
#define QTAWS_LISTJOBSBYSTATUSREQUEST_H

#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ListJobsByStatusRequestPrivate;

class QTAWSELASTICTRANSCODER_EXPORT ListJobsByStatusRequest : public ElasticTranscoderRequest {

public:
    ListJobsByStatusRequest(const ListJobsByStatusRequest &other);
    ListJobsByStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsByStatusRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
