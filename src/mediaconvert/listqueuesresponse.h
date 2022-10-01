// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESRESPONSE_H
#define QTAWS_LISTQUEUESRESPONSE_H

#include "mediaconvertresponse.h"
#include "listqueuesrequest.h"

namespace QtAws {
namespace MediaConvert {

class ListQueuesResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT ListQueuesResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    ListQueuesResponse(const ListQueuesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueuesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueuesResponse)
    Q_DISABLE_COPY(ListQueuesResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
