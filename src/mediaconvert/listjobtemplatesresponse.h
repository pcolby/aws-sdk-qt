// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBTEMPLATESRESPONSE_H
#define QTAWS_LISTJOBTEMPLATESRESPONSE_H

#include "mediaconvertresponse.h"
#include "listjobtemplatesrequest.h"

namespace QtAws {
namespace MediaConvert {

class ListJobTemplatesResponsePrivate;

class QTAWSMEDIACONVERT_EXPORT ListJobTemplatesResponse : public MediaConvertResponse {
    Q_OBJECT

public:
    ListJobTemplatesResponse(const ListJobTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJobTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobTemplatesResponse)
    Q_DISABLE_COPY(ListJobTemplatesResponse)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
