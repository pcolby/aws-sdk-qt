// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_H
#define QTAWS_LISTCOMPONENTSREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListComponentsRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ListComponentsRequest : public ImageBuilderRequest {

public:
    ListComponentsRequest(const ListComponentsRequest &other);
    ListComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
