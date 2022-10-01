// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOPICRESPONSE_H
#define QTAWS_DELETETOPICRESPONSE_H

#include "snsresponse.h"
#include "deletetopicrequest.h"

namespace QtAws {
namespace Sns {

class DeleteTopicResponsePrivate;

class QTAWSSNS_EXPORT DeleteTopicResponse : public SnsResponse {
    Q_OBJECT

public:
    DeleteTopicResponse(const DeleteTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTopicResponse)
    Q_DISABLE_COPY(DeleteTopicResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
