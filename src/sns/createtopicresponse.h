// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOPICRESPONSE_H
#define QTAWS_CREATETOPICRESPONSE_H

#include "snsresponse.h"
#include "createtopicrequest.h"

namespace QtAws {
namespace Sns {

class CreateTopicResponsePrivate;

class QTAWSSNS_EXPORT CreateTopicResponse : public SnsResponse {
    Q_OBJECT

public:
    CreateTopicResponse(const CreateTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTopicResponse)
    Q_DISABLE_COPY(CreateTopicResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
